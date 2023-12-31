//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, VCPMediaAnalysisClientProtocol;

@interface VCPMediaAnalysisClientHandler
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <VCPMediaAnalysisClientProtocol> _clientProxy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_managementQueue;	// 24 = 0x18
    NSMutableDictionary *_taskIDMapping;	// 32 = 0x20
    NSString *_clientBundleID;	// 40 = 0x28
    NSString *_clientTeamID;	// 48 = 0x30
}

+ (unsigned long long)requestLimit;	// IMP=0x002000000004075b
+ (id)errorForStatus:(int)arg1;	// IMP=0x001000000004033c
+ (id)clientHandlerWithXPCConnection:(id)arg1;	// IMP=0x00100000000402d7
- (void).cxx_destruct;	// IMP=0x0020000000054883
- (void)requestProcessingTypes:(unsigned long long)arg1 forAssetsWithLocalIdentifiers:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 withRequestID:(int)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x00100000000544f8
- (void)requestIdentificationOfFacesWithLocalIdentifiers:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 withRequestID:(int)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000053fbf
- (void)requestAutoCounterSIMLValidation:(int)arg1 withPhotoLibraryURL:(id)arg2 simlGroundTruthURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000053beb
- (void)requestAutoCounterAccuracyCalculation:(int)arg1 withPhotoLibraryURL:(id)arg2 clusterStateURL:(id)arg3 groundTruthURL:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000005370c
- (void)requestAutoCounterAccuracyCalculation:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000530e2
- (void)requestDumpAutoCounter:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052cff
- (void)requestOptInAutoCounter:(int)arg1 withPhotoLibraryURL:(id)arg2 persons:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000526e4
- (void)queryAutoCounterOptInStatus:(int)arg1 withPhotoLibraryURL:(id)arg2 personLocalIdentifiers:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000052175
- (void)requestVIPModelStorageFilepathForPhotoLibraryURL:(id)arg1 forModelType:(unsigned long long)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000051e60
- (void)requestPersonPreferenceForPhotoLibraryURL:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051c65
- (void)requestRebuildPersons:(int)arg1 withLocalIdentifiers:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000512ec
- (void)requestReclusterFaces:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000509c1
- (void)requestResetFaceClusteringState:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000050096
- (void)requestClusterCacheValidation:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004f74a
- (void)requestPersonPromoterStatus:(int)arg1 withAdvancedFlag:(_Bool)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004f58c
- (void)requestSuggestedMePersonIdentifier:(int)arg1 withContext:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004ebf0
- (void)requestResetPetClassificationModel:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004e2c5
- (void)requestResetFaceClassificationModel:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004d932
- (void)requestFaceCandidatesforKeyFace:(int)arg1 withPersonsWithLocalIdentifiers:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004cf96
- (void)requestUpdateKeyFacesOfPersons:(int)arg1 withLocalIdentifiers:(id)arg2 andForceUpdate:(_Bool)arg3 andPhotoLibraryURL:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000004c5e3
- (void)requestSuggestedPersons:(int)arg1 withPersonWithLocalIdentifier:(id)arg2 toBeConfirmedPersonSuggestions:(id)arg3 toBeRejectedPersonSuggestions:(id)arg4 andPhotoLibraryURL:(id)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x001000000004baf0
- (void)currentOutstandingTasksWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000004ba60
- (void)cancelBackgroundActivityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000004b924
- (void)notifyLibraryAvailableAtURL:(id)arg1;	// IMP=0x001000000004b70c
- (void)cancelAllRequests;	// IMP=0x001000000004b362
- (void)cancelRequest:(int)arg1;	// IMP=0x001000000004b065
- (void)requestAssetProcessing:(int)arg1 withTaskID:(unsigned long long)arg2 forLocalIdentifiers:(id)arg3 fromPhotoLibraryWithURL:(id)arg4 withOptions:(id)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000049df5
- (void)requestLibraryProcessing:(int)arg1 withTaskID:(unsigned long long)arg2 forPhotoLibraryURL:(id)arg3 withOptions:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x00100000000483a2
- (void)_resetProcessingStatusForTaskID:(unsigned long long)arg1 andPhotoLibrary:(id)arg2;	// IMP=0x00100000000481ab
- (void)requestAssetAnalysis:(int)arg1 forPhotoLibraryURL:(id)arg2 withLocalIdentifiers:(id)arg3 realTime:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000047535
- (void)requestAssetAnalysis:(int)arg1 forLocalIdentifiers:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 withOptions:(id)arg4 analysisTypes:(unsigned long long)arg5 withReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000046706
- (void)requestURLAssetAnalysis:(int)arg1 forAssetWithResourcePaths:(id)arg2 withOptions:(id)arg3 analysisTypes:(unsigned long long)arg4 sandboxTokens:(id)arg5 withReply:(CDUnknownBlockType)arg6;	// IMP=0x00100000000451fb
- (void)endEntryPoint;	// IMP=0x00100000000451e6
- (void)cacheHitWithQueryID:(unsigned long long)arg1 cachedResultQueryID:(unsigned long long)arg2;	// IMP=0x00100000000451c8
- (void)startEntryPointWithQueryID:(unsigned long long)arg1;	// IMP=0x00100000000451b0
- (void)resetPerformanceMeasurements;	// IMP=0x00100000000451a6
- (void)queryPerformanceMeasurementsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000004513d
- (void)requestImageProcessingWithCloudIdentifierRequests:(id)arg1 requestID:(int)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000044976
- (void)requestImageProcessing:(id)arg1 forAssetWithCloudIdentifier:(id)arg2 requestID:(int)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000043daa
- (void)requestImageProcessing:(id)arg1 forIOSurface:(id)arg2 withOrientation:(unsigned int)arg3 assetLocalIdentifier:(id)arg4 photoLibraryURL:(id)arg5 requestID:(int)arg6 andReply:(CDUnknownBlockType)arg7;	// IMP=0x0010000000043599
- (void)requestImageProcessing:(id)arg1 forAssetWithIdentifier:(id)arg2 identifierType:(unsigned long long)arg3 fromPhotoLibraryWithURL:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000042f1b
- (id)assetWithIdentifier:(id)arg1 identifierType:(unsigned long long)arg2 fromPhotoLibraryWithURL:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000426d9
- (void)requestImageProcessing:(id)arg1 forImageData:(id)arg2 withUniformTypeIdentifier:(id)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x00100000000420b5
- (void)requestImageProcessing:(id)arg1 forAssetURL:(id)arg2 withSandboxToken:(id)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000041899
- (void)requestImageProcessing:(id)arg1 forIOSurface:(id)arg2 withOrientation:(unsigned int)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000041149
- (void)completeRequest:(int)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040ed4
- (_Bool)scheduleTask:(id)arg1 withRequestID:(int)arg2 error:(id *)arg3;	// IMP=0x0010000000040766
- (void)requestMediaAnalysisDatabaseAccessSandboxExtensionWithPhotoLibraryURL:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004042f
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x001000000003fb9e
- (id)init;	// IMP=0x001000000003fb90

@end

