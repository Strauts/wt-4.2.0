        #include <cmrc/cmrc.hpp>
#include <map>
#include <utility>

namespace cmrc {
namespace foo-resources {

namespace res_chars {
// These are the files which are available in this resource library
// Pointers to hello.txt
extern const char* const f_2e54_hello_txt_begin;
extern const char* const f_2e54_hello_txt_end;
}

namespace {

const cmrc::detail::index_type&
get_root_index() {
    static cmrc::detail::directory root_directory_;
    static cmrc::detail::file_or_directory root_directory_fod{root_directory_};
    static cmrc::detail::index_type root_index;
    root_index.emplace("", &root_directory_fod);
    struct dir_inl {
        class cmrc::detail::directory& directory;
    };
    dir_inl root_directory_dir{root_directory_};
    (void)root_directory_dir;
    
    root_index.emplace(
        "hello.txt",
        root_directory_dir.directory.add_file(
            "hello.txt",
            res_chars::f_2e54_hello_txt_begin,
            res_chars::f_2e54_hello_txt_end
        )
    );
    return root_index;
}

}

cmrc::embedded_filesystem get_filesystem() {
    static auto& index = get_root_index();
    return cmrc::embedded_filesystem{index};
}

} // foo-resources
} // cmrc
    