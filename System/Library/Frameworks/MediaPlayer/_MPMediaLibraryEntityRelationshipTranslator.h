//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaLibraryEntityTranslator;

__attribute__((visibility("hidden")))
@interface _MPMediaLibraryEntityRelationshipTranslator : NSObject
{
    _Bool _transient;	// 8 = 0x8
    Class _relationshipModelClass;	// 16 = 0x10
    void *_foreignPropertyBase;	// 24 = 0x18
    CDUnknownBlockType _validRelationshipHandler;	// 32 = 0x20
    shared_ptr_66289562 _relationshipValidationProperties;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x00000000002e8fa0
- (void).cxx_destruct;	// IMP=0x00000000002e8f7a
@property(copy, nonatomic) CDUnknownBlockType validRelationshipHandler; // @synthesize validRelationshipHandler=_validRelationshipHandler;
@property(nonatomic) shared_ptr_66289562 relationshipValidationProperties; // @synthesize relationshipValidationProperties=_relationshipValidationProperties;
@property(nonatomic) void *foreignPropertyBase; // @synthesize foreignPropertyBase=_foreignPropertyBase;
@property(nonatomic) _Bool transient; // @synthesize transient=_transient;
@property(nonatomic) Class relationshipModelClass; // @synthesize relationshipModelClass=_relationshipModelClass;
@property(readonly, nonatomic) MPMediaLibraryEntityTranslator *entityTranslator;

@end
