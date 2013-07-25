// -*- mode: c++; indent-tabs-mode: nil; -*-
//
// Manta
// Copyright (c) 2013 Illumina, Inc.
//
// This software is provided under the terms and conditions of the
// Illumina Open Source Software License 1.
//
// You should have received a copy of the Illumina Open Source
// Software License 1 along with this program. If not, see
// <https://github.com/downloads/sequencing/licenses/>.
//

///
/// \author Ole Schulz-Trieglaff
///

#pragma once

#include "manta/Program.hh"

#include "applications/GenerateSVCandidates/GSCOptions.hh"


/// Assembles an SV breakend
///
struct AssembleSVBreakend : public manta::Program
{

    const char*
    name() const
    {
        return "AssembleSVBreakend";
    }

    void
    runInternal(int argc, char* argv[]) const;
};

void
parseOptions(const manta::Program& prog,
             int argc, char* argv[],
             GSCOptions& opt);
