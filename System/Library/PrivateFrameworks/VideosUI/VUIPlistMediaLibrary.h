//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIDeviceMediaLibrary.h"

@class NSObject, NSOperationQueue, VUIPlistMediaDatabase;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaLibrary : VUIDeviceMediaLibrary
{
    VUIPlistMediaDatabase *_database;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;	// 16 = 0x10
    NSOperationQueue *_serialOperationQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002be833
@property(retain, nonatomic) NSOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property(retain, nonatomic) VUIPlistMediaDatabase *database; // @synthesize database=_database;
- (void)_enqueueProcessingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002be6a4
- (void)_handleMediaDatabaseContentsDidChangeNotification:(id)arg1;	// IMP=0x00000000002be692
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;	// IMP=0x00000000002be645
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;	// IMP=0x00000000002be58a
- (id)_imageLoaderIdentifier;	// IMP=0x00000000002be505
- (id)saveMediaEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002be411
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002bdf8d
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002bdaea
- (id)title;	// IMP=0x00000000002bdadd
- (void)dealloc;	// IMP=0x00000000002bda68
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3;	// IMP=0x00000000002bd9f9
- (id)initWithURL:(id)arg1 manager:(id)arg2;	// IMP=0x00000000002bd863

@end
