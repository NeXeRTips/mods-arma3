	class tshirt_organisation_civil_blanche : Uniform_Base {
        scope = 2;
        displayName = "Tenue Organisateur Blanche";
        picture = "\Tenues_Civil\data\icons\Organisation\tshirt_organisation_civil_blanche.paa";
        author = "Julien Bévan";
        /* Affaire plie au sol */
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Organisation\tshirt_organisation_civil_blanche.paa"};
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "tshirt_organisation_civil_blanche";
            containerClass = "Supply20";
            mass = 20;
        };
    };
	class tshirt_organisation_civil_noir : Uniform_Base {
        scope = 2;
        displayName = "Tenue Organisateur Noir";
        picture = "\Tenues_Civil\data\icons\Organisation\tshirt_organisation_civil_noir.paa";
        author = "Julien Bévan";
        /* Affaire plie au sol */
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Organisation\tshirt_organisation_civil_noir.paa"};
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "tshirt_organisation_civil_noir";
            containerClass = "Supply20";
            mass = 20;
        };
    };