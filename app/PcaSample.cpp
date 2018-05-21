#include <iostream>
#include <experimental/filesystem>

#include "io/ply/meshio.h"
#include "face/model.h"

namespace {
    namespace fs = std::experimental::filesystem;
}

int main() {
    telef::face::MorphableFaceModel model(fs::path("data/example"));
    for(int i=1; i<=100; i++) {
        auto m = model.sample();
        //telef::io::ply::writePlyMesh(fs::path("samples/")/fs::path(std::to_string(i)+".ply"), m);
    }

    auto sample = model.genMesh(Eigen::VectorXf::Zero(150));
    //telef::io::ply::writePlyMesh(fs::path("samples/sample_mean.ply"), sample);

    return 0;
}