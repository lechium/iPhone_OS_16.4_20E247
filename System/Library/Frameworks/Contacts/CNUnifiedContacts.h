//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUnifiedContacts : NSObject
{
}

+ (id)unifiedIdentifiersForValue:(id)arg1 inUnifiedMap:(id)arg2 forProperty:(id)arg3;	// IMP=0x008000000004ffb2
+ (_Bool)canUnifyLabel:(id)arg1 withLabel:(id)arg2 forProperty:(id)arg3;	// IMP=0x008000000004fe40
+ (id)unifiedIdentifiersForLabeledValue:(id)arg1 inUnifiedMap:(id)arg2 forProperty:(id)arg3;	// IMP=0x008000000004fc38
+ (unsigned long long)countOfLabelsUnifiableWithLabel:(id)arg1 valuesUnifiableWithValue:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4;	// IMP=0x008000000004f746
+ (unsigned long long)countOfLabelIncludingEquivalents:(id)arg1 value:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4;	// IMP=0x008000000004f407
+ (void)replaceInferiorValueInMultiValue:(id)arg1 withEntryAtIndex:(unsigned long long)arg2 fromMultiValue:(id)arg3 forProperty:(id)arg4;	// IMP=0x008000000004f2dd
+ (unsigned long long)indexOfValueMostInferiorTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;	// IMP=0x008000000004efea
+ (id)indexesOfValuesInferiorTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;	// IMP=0x008000000004ee12
+ (id)indexesOfLabeledValuesUnifiableWithLabelValuePair:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;	// IMP=0x008000000004ecd1
+ (void)addLinkedLabeledValue:(id)arg1 toLabeledValue:(id)arg2 forProperty:(id)arg3;	// IMP=0x008000000004e9e1
+ (_Bool)shouldLabeledValue:(id)arg1 replaceInferiorValueInMultiValue:(id)arg2 forProperty:(id)arg3;	// IMP=0x008000000004e999
+ (_Bool)doesMultiValue:(id)arg1 needLabeledValue:(id)arg2 fromMultiValue:(id)arg3 forProperty:(id)arg4;	// IMP=0x008000000004e883
+ (_Bool)shouldIncludeLabeledValue:(id)arg1 fromSource:(id)arg2 inDestination:(id)arg3 forProperty:(id)arg4;	// IMP=0x008000000004e62a
+ (id)firstNonNilValueForProperty:(id)arg1 inContacts:(id)arg2;	// IMP=0x008000000004df79
+ (void)unifySingleValuesProperties:(id)arg1 ofContacts:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4;	// IMP=0x008000000004ddaf
+ (void)unifyImageOfContacts:(id)arg1 intoContact:(id)arg2 availableKeyDescriptor:(id)arg3;	// IMP=0x008000000004dc52
+ (void)unifyNonNameSingleValuesOfContacts:(id)arg1 withPreferredContact:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4;	// IMP=0x008000000004dbae
+ (void)unifyNamesOfContacts:(id)arg1 withPreferredContact:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4;	// IMP=0x008000000004d9c1
+ (id)unifyAvailableKeysOfContacts:(id)arg1;	// IMP=0x008000000004d701
+ (id)makeNonNameSingleValuePropertiesByKey;	// IMP=0x008000000004d441
+ (id)nonNameSingleValuePropertiesByKey;	// IMP=0x008000000004d386
+ (id)imageValuePropertyKeys;	// IMP=0x008000000004d293
+ (id)imageValuePropertiesByKey;	// IMP=0x008000000004d06f
+ (unsigned long long)indexOfPreferredContactForImage:(id)arg1;	// IMP=0x008000000004cc53

@end

