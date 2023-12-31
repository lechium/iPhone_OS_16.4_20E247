//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerModel : NSObject
{
    NSObject<OS_dispatch_queue> *_underlyingQueue;	// 8 = 0x8
    int _sortOrder;	// 16 = 0x10
    NSMutableArray *_updateHandlers;	// 24 = 0x18
    NSOperationQueue *_thumbnailQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000018b0a
@property(retain, nonatomic) NSOperationQueue *thumbnailQueue; // @synthesize thumbnailQueue=_thumbnailQueue;
@property(retain, nonatomic) NSMutableArray *updateHandlers; // @synthesize updateHandlers=_updateHandlers;
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(readonly, nonatomic) unsigned long long pickerMode;
@property(readonly, copy, nonatomic) NSArray *pickableTypes;
- (void)updateSortDescriptors;	// IMP=0x0000000000018ab2
- (void)refreshItem:(id)arg1 thumbnailOnly:(_Bool)arg2;	// IMP=0x0000000000018a97
@property(readonly, nonatomic) _Bool afterInitialUpdate;
- (id)displayTitle;	// IMP=0x0000000000018a82
- (void)stopMonitoringChanges;	// IMP=0x0000000000018a7c
- (void)startMonitoringChanges;	// IMP=0x0000000000018a76
@property(readonly, nonatomic) NSArray *modelObjects;
- (void)dealloc;	// IMP=0x0000000000018a27
- (id)init;	// IMP=0x0000000000018935

@end

