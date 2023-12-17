#pragma once

#include "Stage.h"
#include <string>

enum ProjectStageStatus{
    PENDENTE,
    ENVIADO,
    APROVADO,
    RECUSADO
};

class ProjectStage{

private:
    Stage stage;

protected:
    std::string id;
    float result;
    ProjectStageStatus status;

public:
    ProjectStage(std::string id, float result = 0, ProjectStageStatus status = ProjectStageStatus::PENDENTE);

    std::string getId();
    void setId(const std::string& id);

    float getResult();
    void setResult(float result);

    ProjectStageStatus getStatus();
    void setStatus(ProjectStageStatus status);

    Stage& getStage();

};