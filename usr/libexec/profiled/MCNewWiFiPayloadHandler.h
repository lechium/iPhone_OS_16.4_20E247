//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCNewWiFiPayloadHandler
{
}

+ (id)managedWiFiNetworkNames;	// IMP=0x004000000005c0db
+ (id)_originatorNameFromInstallationOptions:(id)arg1;	// IMP=0x001000000005c06e
+ (id)_originatorIdentifierFromInstallationOptions:(id)arg1;	// IMP=0x001000000005c001
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x004000000005bf8a
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000005bcb6
- (id)userInputFields;	// IMP=0x001000000005bc66

@end
