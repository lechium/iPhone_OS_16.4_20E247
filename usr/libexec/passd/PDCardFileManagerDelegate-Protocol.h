//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PDMissingRemoteAssetsPersistentStore-Protocol.h"

@class NSArray, NSString, PDCardFileManager, PDPassDaemonData, PKCatalog, PKDiff, PKPass;

@protocol PDCardFileManagerDelegate <PDMissingRemoteAssetsPersistentStore>
- (void)notePassWithUniqueID:(NSString *)arg1 isRevoked:(_Bool)arg2;
- (void)catalogOfRecordWritten:(PKCatalog *)arg1 source:(long long)arg2;
- (void)cardFileManager:(PDCardFileManager *)arg1 didFailToDecryptRemoteAssets:(NSArray *)arg2 forPass:(PKPass *)arg3;
- (void)cardFileManager:(PDCardFileManager *)arg1 didUpdateRemoteAssetsForPassWithUniqueID:(NSString *)arg2;
- (void)passWithUniqueIdentifierDidDisappear:(NSString *)arg1 forReason:(unsigned long long)arg2 withDiagnosticReason:(NSString *)arg3;
- (void)passWithUniqueIdentifierWillDisappear:(NSString *)arg1 forReason:(unsigned long long)arg2 withDiagnosticReason:(NSString *)arg3;
- (void)passWritten:(PKPass *)arg1 withDaemonData:(PDPassDaemonData *)arg2 diff:(PKDiff *)arg3 fromSource:(long long)arg4;
- (_Bool)shouldWritePass:(PKPass *)arg1 source:(long long)arg2 error:(id *)arg3;
@end

