//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSKeychainWrapper : NSObject
{
}

+ (long long)idsKeychainWrapperDataProtectionClassFromIMDataProtectionClass:(unsigned int)arg1;	// IMP=0x0040000000093680
+ (unsigned int)imDataProtectionClassFromDataProtectionClass:(long long)arg1;	// IMP=0x0010000000093660
+ (id)descriptionForDataProtectionClass:(long long)arg1;	// IMP=0x00100000000935c0
+ (id)shortDescriptionForDataProtectionClass:(long long)arg1;	// IMP=0x0010000000093520
+ (_Bool)isInteractionNotAllowedError:(id)arg1;	// IMP=0x00100000000934b0
+ (_Bool)isUpgradePendingError:(id)arg1;	// IMP=0x0010000000093440
+ (_Bool)isItemNotFoundError:(id)arg1;	// IMP=0x00100000000933d0
+ (_Bool)_isKeychainError:(id)arg1 withOSStatus:(int)arg2;	// IMP=0x0010000000093210
- (long long)cloudCircleStatusError:(id *)arg1;	// IMP=0x0040000000094a10
- (_Bool)isInCloudCircleWithError:(id *)arg1;	// IMP=0x0010000000094620
- (id)_keychainAccountFromBaseIdentifier:(id)arg1;	// IMP=0x00100000000945b0
- (_Bool)removeDataForIdentifier:(id)arg1 dataProtectionClass:(long long)arg2 error:(id *)arg3;	// IMP=0x0010000000094460
- (void)saveData:(id)arg1 forIdentifier:(id)arg2 dataProtectionClass:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000094150
- (_Bool)saveData:(id)arg1 forIdentifier:(id)arg2 allowSync:(_Bool)arg3 allowBackup:(_Bool)arg4 dataProtectionClass:(long long)arg5 error:(id *)arg6;	// IMP=0x0010000000093cc0
- (_Bool)saveData:(id)arg1 forIdentifier:(id)arg2 allowSync:(_Bool)arg3 dataProtectionClass:(long long)arg4 error:(id *)arg5;	// IMP=0x0010000000093bf0
- (id)dataForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000093720
- (id)dataForIdentifier:(id)arg1;	// IMP=0x00100000000936a0

@end

