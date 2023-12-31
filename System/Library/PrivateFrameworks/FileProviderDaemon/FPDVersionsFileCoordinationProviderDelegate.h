//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDExtensionManager;

__attribute__((visibility("hidden")))
@interface FPDVersionsFileCoordinationProviderDelegate : NSObject
{
    FPDExtensionManager *_extensionManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000021504
- (void)_movingItemAtURL:(id)arg1 requiresProvidingWithDestinationURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000214fe
- (void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3;	// IMP=0x00000000000214f8
- (void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2;	// IMP=0x00000000000214f2
- (void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2;	// IMP=0x00000000000214ec
- (void)_writerWithID:(id)arg1 didFinishWritingForURL:(id)arg2;	// IMP=0x00000000000214e6
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;	// IMP=0x00000000000214e0
- (void)_provideItemAtURL:(id)arg1 withInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000020250
- (id)_siblingDelegateForURL:(id)arg1;	// IMP=0x0000000000020248
- (id)_physicalURLForURL:(id)arg1;	// IMP=0x000000000001fd24
- (id)_providedItemsOperationQueue;	// IMP=0x000000000001fc92
- (id)_fileReactorID;	// IMP=0x000000000001fc85
- (id)initWithExtensionManager:(id)arg1;	// IMP=0x000000000001fc1a

@end

