#ifndef PROGRESSIVE_EMBEDDING
#define PROGRESSIVE_EMBEDDING

#include <Eigen/Core>

bool progressive_embedding(
  const Eigen::MatrixXd& V,
  Eigen::MatrixXi& F,
  Eigen::MatrixXd& uv,
  const Eigen::VectorXi& bi,
  const Eigen::MatrixXd& b,
  double eps
);

bool progressive_fix(
    const Eigen::VectorXi& cs,
    Eigen::VectorXi& bi,
    Eigen::MatrixXd& b,
    const Eigen::MatrixXd& V,
    Eigen::MatrixXi& F,
    Eigen::MatrixXd& uv
);

#endif