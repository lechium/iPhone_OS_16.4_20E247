//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaEntitiesToGroupsValueTransformer : NSValueTransformer
{
    _Bool _performDefaultSort;	// 8 = 0x8
    NSString *_identifierKeyPath;	// 16 = 0x10
    NSString *_sortIndexKeyPath;	// 24 = 0x18
    CDUnknownBlockType _groupsSortComparator;	// 32 = 0x20
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x0060000000243978
+ (Class)transformedValueClass;	// IMP=0x0060000000243967
- (void).cxx_destruct;	// IMP=0x00000000002441af
@property(nonatomic) _Bool performDefaultSort; // @synthesize performDefaultSort=_performDefaultSort;
@property(copy, nonatomic) CDUnknownBlockType groupsSortComparator; // @synthesize groupsSortComparator=_groupsSortComparator;
@property(copy, nonatomic) NSString *sortIndexKeyPath; // @synthesize sortIndexKeyPath=_sortIndexKeyPath;
@property(copy, nonatomic) NSString *identifierKeyPath; // @synthesize identifierKeyPath=_identifierKeyPath;
- (id)transformedValue:(id)arg1;	// IMP=0x0000000000243980
- (id)initWithIdentifierKeyPath:(id)arg1;	// IMP=0x00000000002438b6
- (id)init;	// IMP=0x0000000000243847

@end

