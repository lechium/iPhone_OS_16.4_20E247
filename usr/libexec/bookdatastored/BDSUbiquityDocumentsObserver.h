//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BDSICloudIdentityToken, BDSUbiquityStatusMonitor, NSMetadataQuery, NSMutableArray, NSString, NSURL;
@protocol BDSUbiquityDocumentsObserverDelegate, OS_dispatch_queue;

@interface BDSUbiquityDocumentsObserver : NSObject
{
    _Bool _loaded;	// 8 = 0x8
    id <BDSUbiquityDocumentsObserverDelegate> _delegate;	// 16 = 0x10
    NSString *_directoriesSubpath;	// 24 = 0x18
    BDSUbiquityStatusMonitor *_ubiquityStatusMonitor;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_metadataQueryQueue;	// 48 = 0x30
    NSMetadataQuery *_query;	// 56 = 0x38
    BDSICloudIdentityToken *_identity;	// 64 = 0x40
    NSURL *_containerURL;	// 72 = 0x48
    NSURL *_noSyncURL;	// 80 = 0x50
    NSMutableArray *_postLoadBlocks;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000000cbea
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) NSMutableArray *postLoadBlocks; // @synthesize postLoadBlocks=_postLoadBlocks;
@property(retain) NSURL *noSyncURL; // @synthesize noSyncURL=_noSyncURL;
@property(retain, nonatomic) NSURL *containerURL; // @synthesize containerURL=_containerURL;
@property(retain, nonatomic) BDSICloudIdentityToken *identity; // @synthesize identity=_identity;
@property(retain, nonatomic) NSMetadataQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metadataQueryQueue; // @synthesize metadataQueryQueue=_metadataQueryQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak BDSUbiquityStatusMonitor *ubiquityStatusMonitor; // @synthesize ubiquityStatusMonitor=_ubiquityStatusMonitor;
@property(retain, nonatomic) NSString *directoriesSubpath; // @synthesize directoriesSubpath=_directoriesSubpath;
@property(nonatomic) __weak id <BDSUbiquityDocumentsObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (id)_replacementObjectForResultObject:(id)arg1;	// IMP=0x001000000000c4c2
- (id)_itemsForMetadataItems:(id)arg1;	// IMP=0x001000000000c396
- (void)q_createSubpathDirectories;	// IMP=0x001000000000c118
- (id)_noSyncURL;	// IMP=0x001000000000be75
- (id)_dataURL;	// IMP=0x001000000000bda1
- (id)_documentsURL;	// IMP=0x001000000000bccd
- (id)_identityData;	// IMP=0x001000000000bc5f
- (void)mq_queryDidUpdate:(id)arg1;	// IMP=0x001000000000ba83
- (void)mq_queryDidFinish:(id)arg1;	// IMP=0x001000000000b618
- (void);	// IMP=0x001000000000b5bc
- (void)mq_tearDownQuery;	// IMP=0x001000000000b42d
- (void)mq_setupQuery:(id)arg1;	// IMP=0x001000000000b20f
- (void)evaluateBlockWhenLoaded:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b0d0
- (void)identityAndURLs:(CDUnknownBlockType)arg1;	// IMP=0x001000000000af64
- (void)noSyncURL:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ae76
- (void)dataURL:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ad84
- (void)documentsURL:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ac92
- (void)containerURL:(CDUnknownBlockType)arg1;	// IMP=0x001000000000aba0
- (void)identityData:(CDUnknownBlockType)arg1;	// IMP=0x001000000000aaae
- (void)tearDownQuery;	// IMP=0x001000000000a948
- (void)restartQuery;	// IMP=0x001000000000a58c
- (void)ubiquityStatusChangedToAvailableWithNewIdentity:(id)arg1 oldIdentity:(id)arg2;	// IMP=0x001000000000a267
- (id)initWithDelegate:(id)arg1 ubquityStatusMonitor:(id)arg2 directoriesSubpath:(id)arg3;	// IMP=0x0010000000009e04
- (id)init;	// IMP=0x0010000000009df6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
