//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioRecordDeviceInfo, NSArray, NSString;

@interface CSAudioDeviceInfo : NSObject
{
    CSAudioRecordDeviceInfo *_recordDeviceInfo;	// 8 = 0x8
    NSString *_playbackRoute;	// 16 = 0x10
    NSArray *_playbackDeviceTypeList;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000e1bc2
- (void).cxx_destruct;	// IMP=0x00200000000e1d63
@property(readonly, copy, nonatomic) NSArray *playbackDeviceTypeList; // @synthesize playbackDeviceTypeList=_playbackDeviceTypeList;
@property(readonly, copy, nonatomic) NSString *playbackRoute; // @synthesize playbackRoute=_playbackRoute;
@property(readonly, copy, nonatomic) CSAudioRecordDeviceInfo *recordDeviceInfo; // @synthesize recordDeviceInfo=_recordDeviceInfo;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000e1c4d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000e1bca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000e1bb7
- (id)description;	// IMP=0x00100000000e1af8
- (id)xpcObject;	// IMP=0x00100000000e1a00
- (id)initWithXPCObject:(id)arg1;	// IMP=0x00100000000e189c
- (id)initWithRecordDeviceInfo:(id)arg1 playbackRoute:(id)arg2 playbackDeviceTypeList:(id)arg3;	// IMP=0x00100000000e17b6

@end
