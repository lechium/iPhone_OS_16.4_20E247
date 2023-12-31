//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/SUBarButtonItem.h>

@class UIBarButtonItem;
@protocol ServiceBridgedNavigationItemProxy;

@interface ServiceBridgedBarButtonItem : SUBarButtonItem
{
    UIBarButtonItem *_underlyingBarButtonItem;	// 8 = 0x8
    id <ServiceBridgedNavigationItemProxy> _proxyHandler;	// 16 = 0x10
}

+ (id)itemFromItem:(id)arg1;	// IMP=0x0040000000027632
- (void).cxx_destruct;	// IMP=0x0020000000027807
@property(nonatomic) __weak id <ServiceBridgedNavigationItemProxy> proxyHandler; // @synthesize proxyHandler=_proxyHandler;
- (void)setTitle:(id)arg1;	// IMP=0x0010000000027782
- (void)setTarget:(id)arg1;	// IMP=0x0010000000027765
- (void)setEnabled:(_Bool)arg1;	// IMP=0x001000000002770d
- (void)setAction:(SEL)arg1;	// IMP=0x00100000000276f0
- (id)title;	// IMP=0x00100000000276d3
- (id)target;	// IMP=0x00100000000276b6
- (_Bool)isEnabled;	// IMP=0x0010000000027699
- (SEL)action;	// IMP=0x001000000002767c

@end

