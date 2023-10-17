//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemRelation : NSObject
{
}

+ (id)allRelationWithRelations:(id)arg1;	// IMP=0x0060000000fe625a
+ (id)anyRelationWithRelations:(id)arg1;	// IMP=0x0060000000fe6204
+ (id)requirementWithDisplayItemState:(id)arg1 placement:(id)arg2;	// IMP=0x0060000000fe61c3
+ (id)exclusionWithDisplayItemState:(id)arg1 placement:(id)arg2;	// IMP=0x0060000000fe6137
- (id)description;	// IMP=0x0000000000fe63fd
- (id)_ui_descriptionBuilder;	// IMP=0x0000000000fe62e3
- (id)type;	// IMP=0x0000000000fe62db
@property(readonly, nonatomic) NSArray *itemStates;
@property(readonly, nonatomic, getter=isFulfilled) _Bool fulfilled;

@end
