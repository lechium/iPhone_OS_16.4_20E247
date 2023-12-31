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

+ (unsigned long long)requestLimit;	// IMP=0x002000000004077b
+ (id)errorForStatus:(int)arg1;	// IMP=0x001000000004035c
+ (id)clientHandlerWithXPCConnection:(id)arg1;	// IMP=0x00100000000402f7
- (void).cxx_destruct;	// IMP=0x00200000000548a3
- (void)requestProcessingTypes:(unsigned long long)arg1 forAssetsWithLocalIdentifiers:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 withRequestID:(int)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000054518
- (void)requestIdentificationOfFacesWithLocalIdentifiers:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 withRequestID:(int)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000053fdf
- (void)requestAutoCounterSIMLValidation:(int)arg1 withPhotoLibraryURL:(id)arg2 simlGroundTruthURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000053c0b
- (void)requestAutoCounterAccuracyCalculation:(int)arg1 withPhotoLibraryURL:(id)arg2 clusterStateURL:(id)arg3 groundTruthURL:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000005372c
- (void)requestAutoCounterAccuracyCalculation:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000053102
- (void)requestDumpAutoCounter:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052d1f
- (void)requestOptInAutoCounter:(int)arg1 withPhotoLibraryURL:(id)arg2 persons:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000052704
- (void)queryAutoCounterOptInStatus:(int)arg1 withPhotoLibraryURL:(id)arg2 personLocalIdentifiers:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000052195
- (void)requestVIPModelStorageFilepathForPhotoLibraryURL:(id)arg1 forModelType:(unsigned long long)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000051e80
- (void)requestPersonPreferenceForPhotoLibraryURL:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051c85
- (void)requestRebuildPersons:(int)arg1 withLocalIdentifiers:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005130c
- (void)requestReclusterFaces:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000509e1
- (void)requestResetFaceClusteringState:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000500b6
- (void)requestClusterCacheValidation:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004f76a
- (void)requestPersonPromoterStatus:(int)arg1 withAdvancedFlag:(_Bool)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004f5ac
- (void)requestSuggestedMePersonIdentifier:(int)arg1 withContext:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004ec10
- (void)requestResetPetClassificationModel:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004e2e5
- (void)requestResetFaceClassificationModel:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004d952
- (void)requestFaceCandidatesforKeyFace:(int)arg1 withPersonsWithLocalIdentifiers:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004cfb6
- (void)requestUpdateKeyFacesOfPersons:(int)arg1 withLocalIdentifiers:(id)arg2 andForceUpdate:(_Bool)arg3 andPhotoLibraryURL:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000004c603
- (void)requestSuggestedPersons:(int)arg1 withPersonWithLocalIdentifier:(id)arg2 toBeConfirmedPersonSuggestions:(id)arg3 toBeRejectedPersonSuggestions:(id)arg4 andPhotoLibraryURL:(id)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x001000000004bb10
- (void)currentOutstandingTasksWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000004ba80
- (void)cancelBackgroundActivityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000004b944
- (void)notifyLibraryAvailableAtURL:(id)arg1;	// IMP=0x001000000004b72c
- (void)cancelAllRequests;	// IMP=0x001000000004b382
- (void)cancelRequest:(int)arg1;	// IMP=0x001000000004b085
- (void)requestAssetProcessing:(int)arg1 withTaskID:(unsigned long long)arg2 forLocalIdentifiers:(id)arg3 fromPhotoLibraryWithURL:(id)arg4 withOptions:(id)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000049e15
- (void)requestLibraryProcessing:(int)arg1 withTaskID:(unsigned long long)arg2 forPhotoLibraryURL:(id)arg3 withOptions:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x00100000000483c2
- (void)_resetProcessingStatusForTaskID:(unsigned long long)arg1 andPhotoLibrary:(id)arg2;	// IMP=0x00100000000481cb
- (void)requestAssetAnalysis:(int)arg1 forPhotoLibraryURL:(id)arg2 withLocalIdentifiers:(id)arg3 realTime:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000047555
- (void)requestAssetAnalysis:(int)arg1 forLocalIdentifiers:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 withOptions:(id)arg4 analysisTypes:(unsigned long long)arg5 withReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000046726
- (void)requestURLAssetAnalysis:(int)arg1 forAssetWithResourcePaths:(id)arg2 withOptions:(id)arg3 analysisTypes:(unsigned long long)arg4 sandboxTokens:(id)arg5 withReply:(CDUnknownBlockType)arg6;	// IMP=0x001000000004521b
- (void)endEntryPoint;	// IMP=0x0010000000045206
- (void)cacheHitWithQueryID:(unsigned long long)arg1 cachedResultQueryID:(unsigned long long)arg2;	// IMP=0x00100000000451e8
- (void)startEntryPointWithQueryID:(unsigned long long)arg1;	// IMP=0x00100000000451d0
- (void)resetPerformanceMeasurements;	// IMP=0x00100000000451c6
- (void)queryPerformanceMeasurementsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000004515d
- (void)requestImageProcessingWithCloudIdentifierRequests:(id)arg1 requestID:(int)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000044996
- (void)requestImageProcessing:(id)arg1 forAssetWithCloudIdentifier:(id)arg2 requestID:(int)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000043dca
- (void)requestImageProcessing:(id)arg1 forIOSurface:(id)arg2 withOrientation:(unsigned int)arg3 assetLocalIdentifier:(id)arg4 photoLibraryURL:(id)arg5 requestID:(int)arg6 andReply:(CDUnknownBlockType)arg7;	// IMP=0x00100000000435b9
- (void)requestImageProcessing:(id)arg1 forAssetWithIdentifier:(id)arg2 identifierType:(unsigned long long)arg3 fromPhotoLibraryWithURL:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000042f3b
- (id)assetWithIdentifier:(id)arg1 identifierType:(unsigned long long)arg2 fromPhotoLibraryWithURL:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000426f9
- (void)requestImageProcessing:(id)arg1 forImageData:(id)arg2 withUniformTypeIdentifier:(id)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x00100000000420d5
- (void)requestImageProcessing:(id)arg1 forAssetURL:(id)arg2 withSandboxToken:(id)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x00100000000418b9
- (void)requestImageProcessing:(id)arg1 forIOSurface:(id)arg2 withOrientation:(unsigned int)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000041169
- (void)completeRequest:(int)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040ef4
- (_Bool)scheduleTask:(id)arg1 withRequestID:(int)arg2 error:(id *)arg3;	// IMP=0x0010000000040786
- (void)requestMediaAnalysisDatabaseAccessSandboxExtensionWithPhotoLibraryURL:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004044f
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x001000000003fbbe
- (id)init;	// IMP=0x001000000003fbb0

@end

