#include "shared/PrintLink.h"
#include "internal/RepoSpecific.h"

std::string printUrl(std::string_view check_name)
{
    std::string url{getRepoUrl()};
    return (url + '#').append(check_name);
}
