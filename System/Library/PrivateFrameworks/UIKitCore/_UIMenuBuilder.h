//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIMenuSystem;

__attribute__((visibility("hidden")))
@interface _UIMenuBuilder : NSObject
{
    CDStruct_de35aa0b _analysis;	// 8 = 0x8
    NSArray *_keyCommandsCache;	// 56 = 0x38
    UIMenuSystem *_system;	// 64 = 0x40
    unsigned long long __changeCount;	// 72 = 0x48
    unsigned long long __actualChangeCount;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000ed8faa
@property(readonly, nonatomic) unsigned long long _actualChangeCount; // @synthesize _actualChangeCount=__actualChangeCount;
@property(readonly, nonatomic) unsigned long long _changeCount; // @synthesize _changeCount=__changeCount;
@property(nonatomic) __weak UIMenuSystem *system; // @synthesize system=_system;
- (void)removeMenuForIdentifier:(id)arg1;	// IMP=0x0000000000ed8aff
- (void)insertChildMenu:(id)arg1 atEndOfMenuForIdentifier:(id)arg2;	// IMP=0x0000000000ed898b
- (void)insertChildMenu:(id)arg1 atStartOfMenuForIdentifier:(id)arg2;	// IMP=0x0000000000ed8809
- (void)insertSiblingMenu:(id)arg1 afterMenuForIdentifier:(id)arg2;	// IMP=0x0000000000ed836f
- (void)insertSiblingMenu:(id)arg1 beforeMenuForIdentifier:(id)arg2;	// IMP=0x0000000000ed7ed8
- (void)_insertMenu:(id)arg1 intoParentMenu:(id)arg2 newParentMenu:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ed773a
- (void)replaceChildrenOfMenuForIdentifier:(id)arg1 fromChildrenBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ed7624
- (void)replaceMenuForIdentifier:(id)arg1 withMenu:(id)arg2;	// IMP=0x0000000000ed6642
- (void)_replaceMenu:(id)arg1 withMenu:(id)arg2;	// IMP=0x0000000000ed63b6
- (_Bool)_isInternallyConsistent;	// IMP=0x0000000000ed6247
- (id)_firstValidMenuWithinIdentifiers:(id)arg1;	// IMP=0x0000000000ed60b4
- (id)_parentOfMenuForIdentifier:(id)arg1 commandForIdentifier:(id)arg2;	// IMP=0x0000000000ed5f78
@property(readonly, nonatomic) NSArray *_keyCommands;
- (void)_recacheCommandsIfNeeded;	// IMP=0x0000000000ed5c9c
- (void)_setNeedsRecacheCommands;	// IMP=0x0000000000ed5c82
- (id)commandForAction:(SEL)arg1 propertyList:(id)arg2;	// IMP=0x0000000000ed5c6c
- (id)actionForIdentifier:(id)arg1;	// IMP=0x0000000000ed5c56
- (id)menuForIdentifier:(id)arg1;	// IMP=0x0000000000ed5c40
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ed5b41
- (id)initWithRootMenu:(id)arg1;	// IMP=0x0000000000ed581c
- (id)initWithSystem:(id)arg1 analysis:(CDStruct_de35aa0b)arg2;	// IMP=0x0000000000ed56f6
- (void)_patch:(id)arg1;	// IMP=0x0000000000f62b09
- (void)_patchInternalDiff:(id)arg1;	// IMP=0x0000000000f615c9
- (id)_internalDiffForDiffv1:(id)arg1;	// IMP=0x0000000000f60b79

@end

