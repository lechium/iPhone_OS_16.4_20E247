//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface VUIAppIconImageLoader : NSObject
{
    NSOperationQueue *_imageLoaderQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00100000000024c1
- (void).cxx_destruct;	// IMP=0x0000000000002a3f
- (id)_createApplicationIconForIdentifier:(id)arg1;	// IMP=0x000000000000296d
- (void)cancelLoad:(id)arg1;	// IMP=0x0000000000002921
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000002689
- (id)imageKeyForObject:(id)arg1;	// IMP=0x000000000000261f
- (id)URLForObject:(id)arg1;	// IMP=0x000000000000256c
- (id)init;	// IMP=0x0000000000002516

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
