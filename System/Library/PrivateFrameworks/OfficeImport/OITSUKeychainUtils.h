//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUKeychainUtils : NSObject
{
}

+ (id)errorForStatus:(int)arg1;	// IMP=0x00000000002aa47d
+ (_Bool)shouldUseTouchID;	// IMP=0x00000000002aa463
+ (void)cryptoProcessData:(id)arg1 encrypt:(_Bool)arg2 localizedReason:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002aa2c7
+ (long long)touchIDAvailability;	// IMP=0x00000000002aa2bf
+ (id)defaultDocumentPasswordDescriptionString;	// IMP=0x00000000002aa24f
+ (id)defaultServiceForGenericItem:(id)arg1;	// IMP=0x00000000002aa1ec
+ (void)authenticateAndUpgradeKeychainResult:(id)arg1 localizedReason:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002aa055
+ (_Bool)removeGenericItem:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002a9ee5
+ (id)mutableQueryForGenericItem:(id)arg1 returnData:(_Bool)arg2;	// IMP=0x00000000002a9d94
+ (_Bool)lookupGenericItem:(id)arg1 account:(id *)arg2 passphrase:(id *)arg3 policy:(long long)arg4 error:(id *)arg5;	// IMP=0x00000000002a9a6e
+ (_Bool)lookupGenericItem:(id)arg1 passphrase:(id *)arg2 policy:(long long)arg3 error:(id *)arg4;	// IMP=0x00000000002a9a44
+ (void)cancelTouchIDIfNeeded;	// IMP=0x00000000002a9a3e
+ (void)lookupGenericItem:(id)arg1 localizedReason:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002a8dcd
+ (void)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 account:(id)arg6 policy:(long long)arg7 completionQueue:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;	// IMP=0x00000000002a8929
+ (_Bool)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 account:(id)arg6 policy:(long long)arg7 error:(id *)arg8;	// IMP=0x00000000002a80b1

@end

