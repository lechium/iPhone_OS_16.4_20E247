//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface _UIRelationshipTraitStorage
{
    NSOrderedSet *_relationshipCandidates;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000958fcf
- (id)_propertyDescriptionString;	// IMP=0x0000000000958f42
- (void)applyRecordsMatchingTraitCollection:(id)arg1;	// IMP=0x000000000095895d
- (void)addRecordWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3;	// IMP=0x00000000009586ba
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000095863d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009585b1
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 relationshipCandidates:(id)arg3;	// IMP=0x0000000000958523

@end

