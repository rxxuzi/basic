if ( sign(f((b+a)/2)) == sign(f(a))  )
        {
            a = (b+a) / 2;
        }
        if ( sign(f((b+a)/2)) == sign(f(b))  )
        {
            b = (b+a) / 2;
        }