//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MIClientConnection, NSArray, NSDictionary;

@interface MIUninstaller : NSObject
{
    unsigned int _percentComplete;	// 8 = 0x8
    NSArray *_receipt;	// 16 = 0x10
    NSArray *_identities;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
    MIClientConnection *_client;	// 40 = 0x28
    NSArray *_outstandingTerminationAssertions;	// 48 = 0x30
}

+ (id)uninstallerForIdentities:(id)arg1 withOptions:(id)arg2 forClient:(id)arg3;	// IMP=0x0040000000039e9a
- (void).cxx_destruct;	// IMP=0x002000000003ebbb
@property(retain, nonatomic) NSArray *outstandingTerminationAssertions; // @synthesize outstandingTerminationAssertions=_outstandingTerminationAssertions;
@property(nonatomic) unsigned int percentComplete; // @synthesize percentComplete=_percentComplete;
@property(readonly, nonatomic) MIClientConnection *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSArray *identities; // @synthesize identities=_identities;
@property(readonly, nonatomic) NSArray *receipt; // @synthesize receipt=_receipt;
- (_Bool)performUninstallationByRevokingTemporaryReference:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003c3f2
- (_Bool)performUninstallationWithError:(id *)arg1;	// IMP=0x001000000003c3db
- (void)_releaseOutstandingTerminationAssertions;	// IMP=0x001000000003c262
- (void)_acquireTerminationAssertionsForIdentifiers:(id)arg1 uninstallUserDataOnly:(_Bool)arg2 builtInAppBundleIDs:(id)arg3;	// IMP=0x001000000003c061
- (void)_addAssertionForIdentifier:(id)arg1 toAssertionsArray:(id)arg2;	// IMP=0x001000000003bfd7
- (id)_uninstallBundleWithIdentity:(id)arg1 linkedToChildren:(id)arg2 waitForDeletion:(_Bool)arg3 uninstallReason:(id)arg4 temporaryReference:(id)arg5 wasLastReference:(_Bool *)arg6 error:(id *)arg7;	// IMP=0x001000000003ac2b
- (_Bool)_removeReferenceForBundleWithIdentity:(id)arg1 linkedToChildren:(id)arg2 temporaryReference:(id)arg3 wasLastReference:(_Bool *)arg4 gatherOptions:(unsigned long long *)arg5 removedInfo:(id *)arg6 error:(id *)arg7;	// IMP=0x001000000003a395
- (_Bool)_uninstallUserStuffForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003a0c9
- (void)_fireCallbackWithStatus:(id)arg1;	// IMP=0x001000000003a075
- (void)_fireCallbackWithStatus:(id)arg1 percentComplete:(unsigned int)arg2;	// IMP=0x0010000000039f2d
- (id)initWithIdentitites:(id)arg1 options:(id)arg2 forClient:(id)arg3;	// IMP=0x0010000000039de3

@end

