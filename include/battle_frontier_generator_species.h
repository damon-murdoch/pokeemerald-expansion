// Allowed Mon Set
struct GeneratorSpecies {
    // Array pointers
    const u16 * species;
    const u16 * restricted;
    
    // Array length
    u16 speciesCount;
    u16 restrictedCount;

    // Type data
    const u8 * type;
    u8 typeCount;
};

u8 InitGeneratorMonotype(struct GeneratorSpecies * species);
void InitGeneratorSpeciesDefault(struct GeneratorSpecies * species);
void InitGeneratorSpeciesForTrainerClass(struct GeneratorSpecies * species, u8 trainerClass);
bool8 InitGeneratorSpecialForTrainerClass(struct GeneratorSpecies * species, u8 trainerClass, bool8 force);

u16 GetGeneratorSpecies(struct GeneratorSpecies * species);
u16 GetDefaultSpecies(void);

u16 GetGeneratorRestricted(struct GeneratorSpecies * species);
u16 GetDefaultRestricted(void);
