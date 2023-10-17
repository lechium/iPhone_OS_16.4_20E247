//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MCCloudConfigurationWriter : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x004000000006bab9
- (_Bool)finalizeCloudConfigurationOutError:(id *)arg1;	// IMP=0x004000000006d72f
- (_Bool)saveCloudConfigurationDetails:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000006cb66
- (_Bool)_validateDetails:(id)arg1 outReasonWhyInvalid:(id *)arg2;	// IMP=0x001000000006bec7
- (_Bool)_isCloudConfigurationAvailableInDEP;	// IMP=0x001000000006bc33
- (_Bool)_isCloudConfigurationActuallyAvailable;	// IMP=0x001000000006bc0d
- (void)faceTimeSignInAttemptDidFinish;	// IMP=0x001000000006bb56
- (_Bool)_writeDetails:(id)arg1 toFile:(id)arg2;	// IMP=0x001000000006bb3e
- (_Bool)_isActivated;	// IMP=0x001000000006bb34
- (_Bool)_activationRecordIndicatesCloudConfigurationIsAvailable;	// IMP=0x001000000006bb0e

@end
