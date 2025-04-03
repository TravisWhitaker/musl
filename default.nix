let pkgsrc = builtins.fetchGit
    {
        url = "https://github.com/nixos/nixpkgs";
        ref = "nixos-24.11";
        rev = "02f2af8c8a8c3b2c05028936a1e84daefa1171d4";
    };
    pkgs = import pkgsrc {};
in pkgs.musl
