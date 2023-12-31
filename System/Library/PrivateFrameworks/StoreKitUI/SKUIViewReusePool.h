//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, UIView;

__attribute__((visibility("hidden")))
@interface SKUIViewReusePool : NSObject
{
    UIView *_parentView;	// 8 = 0x8
    NSMutableDictionary *_reuseClasses;	// 16 = 0x10
    NSMutableArray *_viewPool;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001ea522
- (Class)viewClassWithReuseIdentifier:(id)arg1;	// IMP=0x00000000001ea49a
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;	// IMP=0x00000000001ea41c
- (void)recycleReusableViews:(id)arg1;	// IMP=0x00000000001ea1e3
- (void)hideUnusedViews;	// IMP=0x00000000001ea0b5
- (id)dequeueReusableViewWithReuseIdentifier:(id)arg1;	// IMP=0x00000000001e9f29
- (id)initWithParentView:(id)arg1;	// IMP=0x00000000001e9e82

@end

