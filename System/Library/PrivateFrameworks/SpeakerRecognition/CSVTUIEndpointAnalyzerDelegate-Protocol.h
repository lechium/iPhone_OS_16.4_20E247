//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpeakerRecognition/NSObject-Protocol.h>

@class CSVTUIEndpointAnalyzer;

@protocol CSVTUIEndpointAnalyzerDelegate <NSObject>
- (void)endpointer:(CSVTUIEndpointAnalyzer *)arg1 didDetectHardEndpointAtTime:(double)arg2;
- (void)endpointer:(CSVTUIEndpointAnalyzer *)arg1 didDetectStartpointAtTime:(double)arg2;
@end
