//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, NSString, NSURL;

@interface CKDDeclineShareMetadata : NSObject
{
    NSURL *_shareURL;	// 8 = 0x8
    CKRecordID *_shareRecordID;	// 16 = 0x10
    NSString *_participantID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000164591
@property(retain, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(retain, nonatomic) CKRecordID *shareRecordID; // @synthesize shareRecordID=_shareRecordID;
@property(retain, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;

@end

