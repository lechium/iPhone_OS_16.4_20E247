//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class XPCRequestToken, _TtC9appstored6LogKey;

@interface SubscriptionRequestInfo : NSObject
{
    _Bool _ignoreCaches;	// 8 = 0x8
    _Bool _notifyExternal;	// 9 = 0x9
    _Bool _notifyInternal;	// 10 = 0xa
    _TtC9appstored6LogKey *_logKey;	// 16 = 0x10
    unsigned long long _segment;	// 24 = 0x18
    XPCRequestToken *_token;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000017ff07

@end
