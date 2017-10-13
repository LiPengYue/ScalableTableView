#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "ScalableTableView.h"
#import "UITableViewCell+ScalableTableViewCell_Extension.h"

FOUNDATION_EXPORT double ScalableTableViewVersionNumber;
FOUNDATION_EXPORT const unsigned char ScalableTableViewVersionString[];

