//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BADownload, NSError;

@interface BAUnhandledDownloadEvent : NSObject
{
    long long _type;	// 8 = 0x8
    BADownload *_download;	// 16 = 0x10
    NSError *_eventError;	// 24 = 0x18
}

+ (id)classesForSerialization;	// IMP=0x002000000003107a
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000031072
- (void).cxx_destruct;	// IMP=0x00200000000317be
@property(retain) NSError *eventError; // @synthesize eventError=_eventError;
@property(retain) BADownload *download; // @synthesize download=_download;
@property long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x0010000000031604
- (id)typeString;	// IMP=0x00100000000315cc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000314d6
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000312dd
- (id)initWithEventType:(long long)arg1 download:(id)arg2 error:(id)arg3;	// IMP=0x00100000000311e3

@end
