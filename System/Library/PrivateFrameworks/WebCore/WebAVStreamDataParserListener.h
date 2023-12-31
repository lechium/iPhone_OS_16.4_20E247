//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVStreamDataParser, NSString;

__attribute__((visibility("hidden")))
@interface WebAVStreamDataParserListener : NSObject
{
    void *_parent;	// 8 = 0x8
    AVStreamDataParser *_parser;	// 16 = 0x10
}

@property void *parent; // @synthesize parent=_parent;
- (void)streamDataParser:(id)arg1 didProvideContentKeyRequestInitializationData:(id)arg2 forTrackID:(int)arg3;	// IMP=0x0000000000d41270
- (void)streamDataParserWillProvideContentKeyRequestInitializationData:(id)arg1 forTrackID:(int)arg2;	// IMP=0x0000000000d411f0
- (void)streamDataParser:(id)arg1 didProvideMediaData:(struct opaqueCMSampleBuffer *)arg2 forTrackID:(int)arg3 mediaType:(id)arg4 flags:(unsigned long long)arg5;	// IMP=0x0000000000d406f0
- (void)streamDataParser:(id)arg1 didFailToParseStreamDataWithError:(id)arg2;	// IMP=0x0000000000d405a0
- (void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2 withDiscontinuity:(_Bool)arg3;	// IMP=0x0000000000d40580
- (void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2;	// IMP=0x0000000000d403e0
- (void)invalidate;	// IMP=0x0000000000d403b0
- (void)dealloc;	// IMP=0x0000000000d40360
- (id)initWithParser:(id)arg1 parent:(void *)arg2;	// IMP=0x0000000000d402f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

