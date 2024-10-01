#include <iostream>
#include <sstream>
#include <iomanip>
#include <filesystem>

// #include <ShellExec.hpp>
// #include <Tomography.hpp>
#include <TomographyModels/All>

using namespace std;

int main()
{
    std::filesystem::path cwd = std::filesystem::current_path();
    // std::cout << cwd << std::endl;
    std::string fwd = cwd / "modeldata/S40RTS_dvs.nc";
    // std::string fwd2 = cwd / "modeldata/GyPSuM_vp.nc";

    // std::cout << fwd << std::endl;
    // which *.nc file to use.
    // auto tomo = Tomography("./modeldata/S40RTS_dvs.nc");
    auto tomo = Tomography(fwd);
    // auto tomo2 = Tomography(fwd2);
    // get dvs value at location (depth, lon, lat).
    cout << tomo.GetValueAt(2343.5, 253.03, -87.5) << endl;

    // Other APIs.
    cout << tomo.GetDepths()[0] << " " << tomo.GetDepths().back() << endl;
    cout << tomo.GetLongitudes()[0] << " " << tomo.GetLongitudes().back() << endl;
    cout << tomo.GetLatitudes()[0] << " " << tomo.GetLatitudes().back() << endl;

    return 0;
}
