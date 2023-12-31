//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Matter/MTRBaseDevice.h>

@interface MTRBaseDevice (HMMTRPairing)
- (id)_vendorNameForVendorID:(id)arg1 vendorMetadataStore:(id)arg2;	// IMP=0x0060000000096808
- (void)_fetchPairingsWithCallbackQueue:(id)arg1 filtered:(_Bool)arg2 vendorMetadataStore:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00600000000966c0
- (void)fetchCurrentPairingWithCallbackQueue:(id)arg1 vendorMetadataStore:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00600000000966a3
- (void)fetchPairingsWithCallbackQueue:(id)arg1 vendorMetadataStore:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0060000000096689
- (void)fetchSerialNumberWithCallbackQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00600000000965f5
- (void)removeAllPairingsForCallbackQueue:(id)arg1 vendorMetadataStore:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000009644a
- (void)updateFabricLabel:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000009634d
- (void)fetchCurrentFabricIndexWithCallbackQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00600000000961be
- (void)unpairDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0060000000096039
- (void)_removePairing:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0060000000095e4c
- (void)removePairing:(id)arg1 callbackQueue:(id)arg2 vendorMetadataStore:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0060000000095c21
- (id)_retrieveFabricClusterWithQueue:(id)arg1;	// IMP=0x0060000000095bc3
@end

