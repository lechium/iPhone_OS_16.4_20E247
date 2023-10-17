//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisionKitCore/NSObject-Protocol.h>

@class NSArray, VKVideoTextRecognizer;

@protocol VKVideoTextRecognizerDelegate <NSObject>
- (struct CGPoint)visionPointFromLayerPoint:(struct CGPoint)arg1;
- (struct CGPoint)layerPointFromVisionPoint:(struct CGPoint)arg1;
- (void)videoTextRecognizer:(VKVideoTextRecognizer *)arg1 added:(NSArray *)arg2 updated:(NSArray *)arg3 removed:(NSArray *)arg4;

@optional
- (void)videoTextRecognizer:(VKVideoTextRecognizer *)arg1 added:(NSArray *)arg2 updated:(NSArray *)arg3 removed:(NSArray *)arg4 bufferTimestamp:(CDStruct_198678f7)arg5;
- (void)videoTextRecognizer:(VKVideoTextRecognizer *)arg1 didChangeStability:(unsigned long long)arg2;
@end
