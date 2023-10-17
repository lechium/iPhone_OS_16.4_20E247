//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UISearchBarLayoutBase : NSObject
{
    _Bool _isLayoutValid;	// 8 = 0x8
    _Bool _layoutRTL;	// 9 = 0x9
    _Bool _hostedByNavigationBar;	// 10 = 0xa
    long long _barMetrics;	// 16 = 0x10
    struct CGSize _layoutSize;	// 24 = 0x18
    struct UIEdgeInsets _contentInset;	// 40 = 0x28
}

@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(nonatomic, getter=isHostedByNavigationBar) _Bool hostedByNavigationBar; // @synthesize hostedByNavigationBar=_hostedByNavigationBar;
@property(nonatomic, getter=isLayoutRTL) _Bool layoutRTL; // @synthesize layoutRTL=_layoutRTL;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) long long barMetrics; // @synthesize barMetrics=_barMetrics;
- (id)description;	// IMP=0x00000000001f989b
- (void)invalidateLayout;	// IMP=0x00000000001f9891
@property(readonly, nonatomic, getter=isLayoutValid) _Bool layoutValid;
- (void)updateLayoutIfNeeded;	// IMP=0x00000000001f985e
- (void)updateLayout;	// IMP=0x00000000001f9858
- (void)applyLayout;	// IMP=0x00000000001f9852
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f9720

@end
