//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface _TtC10LinkDaemon17AppShortcutClient : NSObject
{
    MISSING_TYPE *bundleID;	// 8 = 0x8
    MISSING_TYPE *registrySource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0040000000061e30
- (id)init;	// IMP=0x0010000000061dd0
- (void)retrieveSiriLanguageWithReply:(void (^)(NSString *, NSError *))arg1;	// IMP=0x0010000000061b50
- (void)refreshAutoShortcutSubstitution:(NSArray *)arg1 reply:(void (^)(NSError *))arg2;	// IMP=0x0010000000061870

@end
