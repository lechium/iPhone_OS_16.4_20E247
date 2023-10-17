//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailCore/NSCopying-Protocol.h>
#import <EmailCore/NSObject-Protocol.h>

@class ECEmailAddress, NSString;

@protocol ECEmailAddressConvertible <NSObject, NSCopying>
@property(readonly, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) ECEmailAddress *emailAddressValue;
@end
