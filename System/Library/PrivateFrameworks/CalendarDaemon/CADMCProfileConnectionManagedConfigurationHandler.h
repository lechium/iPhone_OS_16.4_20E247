//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCProfileConnection;

__attribute__((visibility("hidden")))
@interface CADMCProfileConnectionManagedConfigurationHandler : NSObject
{
    MCProfileConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000036108
@property(readonly, nonatomic) MCProfileConnection *connection; // @synthesize connection=_connection;
- (id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(int)arg3;	// IMP=0x000000000003605f
- (id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(int)arg3;	// IMP=0x0000000000035fc0
- (_Bool)mayShowLocalAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(int)arg2;	// IMP=0x0000000000035f43
- (_Bool)mayShowLocalAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2;	// IMP=0x0000000000035ec6
- (_Bool)isOpenInRestrictionInEffect;	// IMP=0x0000000000035e82
- (id)initWithMCProfileConnection:(id)arg1;	// IMP=0x0000000000035e17

@end
