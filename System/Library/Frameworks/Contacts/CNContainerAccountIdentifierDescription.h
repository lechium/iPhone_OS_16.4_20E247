//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CNContainerAccountIdentifierDescription
{
}

- (void)setCNValue:(id)arg1 onContainer:(id)arg2;	// IMP=0x000000000000d841
- (id)CNValueForContainer:(id)arg1;	// IMP=0x000000000000d82c
- (Class)valueClass;	// IMP=0x000000000000d81b
- (_Bool)isWritable;	// IMP=0x000000000000d813
- (id)key;	// IMP=0x000000000000d7ff
- (_Bool)setABValue:(void *)arg1 onABSource:(void *)arg2 error:(struct __CFError **)arg3;	// IMP=0x000000000004a165
- (void *)ABValueForABSource:(void *)arg1;	// IMP=0x000000000004a120
- (id)CNValueFromABValue:(void *)arg1;	// IMP=0x000000000004a10a
- (void *)ABValueFromCNValue:(id)arg1;	// IMP=0x000000000004a101
- (int)abPropertyID;	// IMP=0x000000000004a0f2

@end

