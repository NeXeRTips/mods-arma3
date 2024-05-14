	class polomcdo : Uniform_Base {
        scope = 2;
        displayName = "Polo McDonalds";
        picture = "\Tenues_Civil\data\icons\Autre\polomcdo.paa";
        author = "A3F";
        /* Affaire plie au sol */
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Autre\polomcdo.paa"};
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "polomcdo";
            containerClass = "Supply20";
            mass = 20;
        };
    };