//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface CSDRelayIDSDualSessionData : NSObject
{
    NSData *_data;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000673af
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;

@end
