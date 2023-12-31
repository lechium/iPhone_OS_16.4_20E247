//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/SUNavigationItem.h>

@protocol ServiceBridgedNavigationItemProxy;

@interface ServiceBridgedNavigationItem : SUNavigationItem
{
    id <ServiceBridgedNavigationItemProxy> _proxyHandler;	// 8 = 0x8
}

+ (id)itemFromItem:(id)arg1;	// IMP=0x0040000000026b45
- (void).cxx_destruct;	// IMP=0x0020000000026f85
@property(nonatomic) __weak id <ServiceBridgedNavigationItemProxy> proxyHandler; // @synthesize proxyHandler=_proxyHandler;
- (void)setTitle:(id)arg1;	// IMP=0x0010000000026eee
- (void)setRightBarButtonItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000026e84
- (void)setHidesBackButton:(_Bool)arg1;	// IMP=0x0010000000026e1a
- (void)setBackButtonTitle:(id)arg1;	// IMP=0x0010000000026db0
- (id)rightBarButtonItem;	// IMP=0x0010000000026cf9

@end

