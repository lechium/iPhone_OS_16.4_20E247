//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CNContainerRestrictionsDescription
{
}

- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000dbce
- (void)setCNValue:(id)arg1 onContainer:(id)arg2;	// IMP=0x000000000000db7c
- (id)CNValueForContainer:(id)arg1;	// IMP=0x000000000000db44
- (Class)valueClass;	// IMP=0x000000000000db33
- (_Bool)isWritable;	// IMP=0x000000000000db2b
- (id)key;	// IMP=0x000000000000db17
- (_Bool)setABValue:(void *)arg1 onABSource:(void *)arg2 error:(struct __CFError **)arg3;	// IMP=0x000000000004a2d1
- (id)CNValueFromABValue:(void *)arg1;	// IMP=0x000000000004a299
- (void *)ABValueFromCNValue:(id)arg1;	// IMP=0x000000000004a262
- (_Bool)isConvertibleABValue:(void *)arg1;	// IMP=0x000000000004a22e
- (int)abPropertyID;	// IMP=0x000000000004a21f

@end

