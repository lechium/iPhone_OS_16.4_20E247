//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureInput, AVMetadataObject, NSString;

__attribute__((visibility("hidden")))
@interface AVMetadataObjectInternal : NSObject
{
    CDStruct_1b6d18a9 _time;	// 8 = 0x8
    CDStruct_1b6d18a9 _duration;	// 32 = 0x20
    struct CGRect _bounds;	// 56 = 0x38
    NSString *_type;	// 88 = 0x58
    AVCaptureInput *_input;	// 96 = 0x60
    AVMetadataObject *_originalMetadataObject;	// 104 = 0x68
    long long _groupID;	// 112 = 0x70
    unsigned long long _syntheticFocusMode;	// 120 = 0x78
    long long _detectionSource;	// 128 = 0x80
}

@property long long detectionSource; // @synthesize detectionSource=_detectionSource;
@property unsigned long long syntheticFocusMode; // @synthesize syntheticFocusMode=_syntheticFocusMode;
@property long long groupID; // @synthesize groupID=_groupID;
@property(retain) AVMetadataObject *originalMetadataObject; // @synthesize originalMetadataObject=_originalMetadataObject;
@property(retain) AVCaptureInput *input; // @synthesize input=_input;
@property(retain) NSString *type; // @synthesize type=_type;
@property struct CGRect bounds; // @synthesize bounds=_bounds;
@property CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property CDStruct_1b6d18a9 time; // @synthesize time=_time;
- (void)dealloc;	// IMP=0x000000000009eb98
- (id)init;	// IMP=0x000000000009eb21

@end
