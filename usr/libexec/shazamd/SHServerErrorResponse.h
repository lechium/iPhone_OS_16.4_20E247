//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError;

@interface SHServerErrorResponse : NSObject
{
    NSDictionary *_errorDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000002d60e
@property(retain, nonatomic) NSDictionary *errorDictionary; // @synthesize errorDictionary=_errorDictionary;
- (long long)errorCodeForResponseCode:(id)arg1;	// IMP=0x001000000002d585
@property(readonly, nonatomic) NSError *error;
- (id)initWithErrorDictionary:(id)arg1;	// IMP=0x001000000002d38b

@end

