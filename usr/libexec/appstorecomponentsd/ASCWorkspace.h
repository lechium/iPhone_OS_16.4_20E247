//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSRecursiveLock;

@interface ASCWorkspace : NSObject
{
    _Bool _extension;	// 8 = 0x8
    NSMutableDictionary *_pendingResults;	// 16 = 0x10
    NSOperationQueue *_openApplicationOperationQueue;	// 24 = 0x18
    NSRecursiveLock *_stateLock;	// 32 = 0x20
}

+ (void)withSharedWorkspace:(id)arg1 perform:(CDUnknownBlockType)arg2;	// IMP=0x0020000000020535
+ (id)sharedWorkspace;	// IMP=0x0010000000020465
+ (id)log;	// IMP=0x0010000000020409
- (void).cxx_destruct;	// IMP=0x0010000000020be2
@property(readonly, nonatomic) NSRecursiveLock *stateLock; // @synthesize stateLock=_stateLock;
@property(retain, nonatomic) NSOperationQueue *openApplicationOperationQueue; // @synthesize openApplicationOperationQueue=_openApplicationOperationQueue;
@property(readonly) NSMutableDictionary *pendingResults; // @synthesize pendingResults=_pendingResults;
@property(readonly, nonatomic, getter=isExtension) _Bool extension; // @synthesize extension=_extension;
- (id)popPendingResultForOperationName:(id)arg1;	// IMP=0x0010000000020a81
- (void)enqueueOpenApplicationOperation:(id)arg1 pendingResult:(id)arg2;	// IMP=0x0010000000020876
- (id)openSensitiveURL:(id)arg1;	// IMP=0x001000000002074b
- (id)openURL:(id)arg1 frontBoardOptions:(id)arg2;	// IMP=0x0010000000020607
- (id)openURL:(id)arg1;	// IMP=0x00100000000205f3
- (id)_init;	// IMP=0x00100000000204df
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0010000000020311
- (void)openResourceOperationDidComplete:(id)arg1;	// IMP=0x0010000000020219
- (id)openProductURL:(id)arg1;	// IMP=0x0010000000020205
- (void)openApplicationWithBundleIdentifier:(id)arg1 configuration:(id)arg2 pendingResult:(id)arg3;	// IMP=0x0010000000020034
- (void)openApplicationWithBundleIdentifier:(id)arg1 usingOpenResourceOperationWithPayloadURL:(id)arg2 options:(id)arg3 pendingResult:(id)arg4;	// IMP=0x001000000001febc
- (id)openApplicationWithBundleIdentifier:(id)arg1 payloadURL:(id)arg2;	// IMP=0x001000000001f78d

@end

