//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DSFileOperationID, NSDate, NSProgress, UTType;

@interface DSFileOperation : NSObject
{
    DSFileOperationID *_operationID;	// 8 = 0x8
    NSProgress *_progress;	// 16 = 0x10
    NSDate *_dateStarted;	// 24 = 0x18
    UTType *_utType;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000002953b
+ (_Bool)dateIsBusyFolderDate:(double)arg1;	// IMP=0x001000000002949d
- (void).cxx_destruct;	// IMP=0x0020000000029904
@property(retain, nonatomic) UTType *utType; // @synthesize utType=_utType;
@property(retain, nonatomic) NSDate *dateStarted; // @synthesize dateStarted=_dateStarted;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) DSFileOperationID *operationID; // @synthesize operationID=_operationID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000029818
- (unsigned long long)hash;	// IMP=0x0010000000029802
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002964c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000029543
- (id)init;	// IMP=0x00100000000294c7

@end

